<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jspl/core" %>
<html>
<head>
<title>Directives Tag</title>
</head>
<body>
	<c:forEach var="k" begin="1" end="10" step="1">
		<c:out value="${k}" />
	</c:forEach>
</body>
</html>