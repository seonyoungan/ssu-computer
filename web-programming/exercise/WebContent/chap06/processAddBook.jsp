<%@ page contentType="text/html; charset=UTF-8" %>
<%@ page import="dto.Book" %>
<%@ page import="dao.BookRepository" %>
<%@ page import="java.util.concurrent.Flow.Publisher" %>

<%
	request.setCharacterEncoding("utf-8");
	
	String bookId=request.getParameter("BookId");
	String name=request.getParameter("name");
	String unitPrice = request.getParameter("unitPrice");
	String author = request.getParameter("author");
	String publisher = request.getParameter("publisher");
	String releaseDate = request.getParameter("releaseDate");
	String totalPages = request.getParameter("totalPages");
	String description = request.getParameter("description");
	String category = request.getParameter("category");
	String unitsInStock = request.getParameter("unitsInStock");
	String condition = request.getParameter("condition");
	
	Integer price;
	
	if(unitPrice != null && unitPrice.isEmpty())	price=0;
	else	price=Integer.valueOf(unitPrice);
	
	long stock;
	
	if(unitsInStock != null && unitsInStock.isEmpty())	stock=0;
	else	stock=Long.valueOf(unitsInStock);
	
	long pages;
	
	if(unitsInStock.isEmpty())	pages=0;
	else	pages=Long.valueOf(totalPages);
	
	
	BookRepository dao=BookRepository.getInstance();
	
	Book newBook=new Book();
	newBook.setBookId(bookId);
	newBook.setPname(name);
	newBook.setUnitPrice(price);
	newBook.setAuthor(author);
	newBook.setPublisher(description);
	newBook.setPublisher(publisher);
	newBook.setReleaseDate(releaseDate);
	newBook.setTotalPages(pages);
	newBook.setDescription(description);
	newBook.setCategory(category);
	newBook.setUnitsInStock(stock);
	newBook.setCondition(condition);
	
	dao.addBook(newBook);
	
	response.sendRedirect("products.jsp");
%>