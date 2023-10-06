<%@ page contentType="text/html; charset=UTF-8"%>
<%@ page import="java.util.ArrayList" %>
<%@ page import="dto.Book" %>
<jsp:useBean id="BookDAO" class="dao.BookRepository" scope="session" />

<html>
<head>
	<link rel="stylesheet"
	    href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
	<title>Welcome</title>
	</head>    
<body>
	<%@ include file="menu.jsp" %>
	<%! String greeting="도서 목록";%>
	
	<div class="jumbotron">
		<div class="container">
			<h1 class="display-3"> <%=greeting %> </h1>
		</div>
	</div>
	
	<% ArrayList<Book> listOfBooks=BookDAO.getAllBooks(); %>
	<div class="container">
		<div class="col" align="left">
		<%
			for(int i=0;i<listOfBooks.size();i++){
				Book book=listOfBooks.get(i);
		%>
			<div class="col-lg">
				<h4>[ <%=book.getCategory() %> ]</h4>
					<p><p><%=book.getDescription()%>
					<p><%=book.getAuthor() %> | <%=book.getPublisher() %> | <%=book.getUnitPrice() %>
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
