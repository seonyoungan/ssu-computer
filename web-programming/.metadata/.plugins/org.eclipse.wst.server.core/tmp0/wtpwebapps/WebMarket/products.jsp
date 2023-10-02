<%@ page contentType="text/html; charset=utf-8" %>
<%@ page import="java.util.ArrayList" %>
<%@ page import="dto.Product" %>
<jsp:useBean id="productDAO" class="dao.ProductRepository" scope="session" />

<html>
<head>
<link rel="stylesheet"
href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
<title>상품목록</title>
</head>
<body>
<jsp:include page="menu.jsp" />
	<div class="jumbotron">
		<div class="container">
			<h1 class="display-3">상품목록</h1>
		</div>
	</div>
<%
	ArrayList<Product>list0fProducts=productDAO.getAllProducts();
%>
<div class="container">
	<div class="row" align="center">
		<%
			for (int i=0;i<list0fProducts.size();i++){
			Product product = list0fProducts.get(i);	
		%>
		<div class="col-md-4">
			<h3><%=product.getPname()%></h3>
			<p><%=product.getDescription()%>
			<p><%=product.getUnitPrice()%>원
			<p><a href="./product.jsp?id=<%=product.getProductId()%>" class="btn btn-secondary" role="button"> 상세 정보 &raquo;</a>
		</div>
		<%
			}
		%>
	</div>
	<hr>
	</div>
<jsp:include page="footer.jsp" />
</body>
</html>