<%@ page contentType="text/html; charset=UTF-8"%>
<%@ page import="java.util.ArrayList" %>
<%@ page import="dto.Book" %>
<%@ page import="dao.BookRepository" %>

<html>
<head>
	<link rel="stylesheet"
	    href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
	<title>Products</title>
	</head>    
<body>
	<%@ include file="menu.jsp" %>
	<%! String greeting="도서 목록";%>
	
	<div class="jumbotron">
		<div class="container">
			<h1 class="display-3"> <%=greeting %> </h1>
		</div>
	</div>
	
	<%
		BookRepository dao = BookRepository.getInstance();
		ArrayList<Book> listOfBooks = dao.getAllBooks();
	%>
	
	<div class="container">
		<div class="col" align="left">
		<%
			for(int i=0;i<listOfBooks.size();i++){
				Book book=listOfBooks.get(i);
		%>
			<div class="col-lg">
				<h4>[<%=book.getCategory() %>] <%=book.getPname() %></h4>
				<p><p><%=book.getDescription() %>
				<p><a href="./product.jsp?id=<%=book.getBookId()%>" class="btn btn-secondary" role="button"> 상세 정보 &raquo;</a>
				<p><%=book.getAuthor() %> | <%=book.getPublisher() %> | <%=book.getUnitPrice() %>원
			</div>
			<hr>
			<%
				}
			%>            
		</div> 	
	</div>

	<%@ include file="footer.jsp" %>
</body>
</html>
