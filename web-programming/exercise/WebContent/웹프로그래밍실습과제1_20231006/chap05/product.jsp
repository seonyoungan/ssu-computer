<%@ page contentType="text/html; charset=utf-8" %>
<%@ page import="dto.Book"%>
<%@ page import="dao.BookRepository" %>
<jsp:useBean id="BookDAO" class="dao.BookRepository" scope="session" />

<html>
<head>
<link rel="stylesheet"
href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
<title>상품 상세 정보</title>
</head>
<body>
	<jsp:include page="menu.jsp" />
	<div class="jumbotron">
		<div class="container">
			<h1 class="display-3">상품 정보</h1>
		</div>
	</div>
	
	<%
	
		String id = request.getParameter("id");
	
		BookRepository dao = BookRepository.getInstance();
		Book book = dao.getBookById(id);
	
	%>
	<div class="container">
		<div class="row">
			<div class="col-md-6">
				<h3><%=book.getPname() %></h3>
				<p><%=book.getDescription()%>
				<p><b>도서 코드</b> : <span class="badge badge-danger">
					<%=book.getBookId()%></span>
				<p><b>출판사</b> : <%=book.getPublisher() %>
				<p><b>재고 </b> : <%=book.getUnitsInStock() %>
				<p><b>총 페이지 수 </b> : <%=book.getTotalPages() %>
				<h4><%=book.getUnitPrice() %>원</h4>
				<p><a href="#" class="btn btn-info">도서 주문 &raquo; </a>
				<p><a href="./products.jsp" class="btn btn-secondary"> 도서 목록 &raquo; </a>
			</div>
		</div>
		<hr>
	</div>
<jsp:include page="footer.jsp" />
</body>
</html>