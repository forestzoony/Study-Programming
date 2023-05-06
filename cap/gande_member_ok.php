<?php
// MySQL 데이터베이스에 연결
$servername = "localhost";
$hostname = "root";
$password = "dmsdud0513!";
$dbname = "gande_member";

$conn = mysqli_connect($servername, $hostname, $password, $dbname);
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// 사용자가 입력한 데이터 가져오기
$name = $_POST['name'];
$phone = $_POST['phone'];
$username = $_POST['username'];
$password = $_POST['password'];
$email = $_POST['email'] . '@' . $_POST['eadress'];

// MySQL에 데이터 삽입
$sql = "INSERT INTO gande_member (name, phone, username, password, email)
VALUES ('$name', '$phone', '$username', '$password', '$email')";

if (mysqli_query($conn, $sql)) {
    $message = "회원 가입이 완료되었습니다.";
    echo "<script type='text/javascript'>alert('$message');
    window.location.href = 'login.php';</script>";
} else {
    echo "정보를 모두 입력하셨는지 확인해주세요." . $sql . "<br>" . mysqli_error($conn);
}

mysqli_close($conn);
?>

<meta charset="utf-8" />