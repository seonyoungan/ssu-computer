<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<html>
<head>
</head>
<body>
<c:forEach var="i" begin="0" end="10" step="2">
	<c:out value="${i}" />
</c:forEach>
</body>
</html>