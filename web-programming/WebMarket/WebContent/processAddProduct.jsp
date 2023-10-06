<%@ page contentType="text/html; charset=UTF-8" %>
<%@ page import="dto.Product" %>
<%@ page import="dao.ProductRepository" %>
<%@ page import="java.util.concurrent.Flow.Publisher" %>

<%
	request.setCharacterEncoding("utf-8");
	
	String productId=request.getParameter("productId");
	String name=request.getParameter("name");
	String unitPrice = request.getParameter("unitPrice");
	String manufacturer = request.getParameter("manufacturer");
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
	
	
	ProductRepository dao=ProductRepository.getInstance();
	
	Product newProduct=new Product();
	newProduct.setProductId(productId);
	newProduct.setPname(name);
	newProduct.setUnitPrice(price);
	newProduct.setManufacturer(manufacturer);
	newProduct.setDescription(description);
	newProduct.setCategory(category);
	newProduct.setUnitsInStock(stock);
	newProduct.setCondition(condition);
	
	dao.addProduct(newProduct);
	
	response.sendRedirect("products.jsp");
%>