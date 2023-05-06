<?php
    header('Content-Type: text/html; charset = utf-8');
    if (isset($_SESSION['username'])) {
?>
<!DOCTYPE html>
<html>
<head>
    <meta charset = "utf-8" />
    <title>내 정보</title>
    <style>
        * {margin: 0 auto;}
        a {
            color: #333;
            text-decoration: none;
        }
        .find {
            text-align: center;
            width: 500px;
            margin-top: 30px;
        }
    </style>
</head>
    <body>
        <div class = "find">
            <form method = "post" action = "gande_member_update.php">
                <?php
                    $sql = "SELECT * FROM gande_member WHERE username = '{$_SESSION['username']}'";
                    $result = mysqli_query($conn, $sql);
                    $gande_member = mysqli_fetch_array($result);
                    if (!$gande_member) { // 회원 정보가 없는 경우
                        echo "<script>alert('회원 정보를 찾을 수 없습니다.'); history.back();</script>";
                        exit;
                    }
                ?>
                <h1>내 정보</h1>
                <p><a href = "">홈으로</a></p>
                <fieldset>
                    <legend>마이페이지</legend>
                    <table>
                        <tr>
                            <td>이름</td>
                            <td><input type = "text" size = "20" name = "name" placeholder = "이름" value = "<?php echo $gande_member['name']; ?>"></td>
                        </tr>
                        <tr>
                            <td>전화번호</td>
                            <td><input type = "text" size = "20" name = "phone" placeholder = "전화번호" value = "<?php echo $gande_member['phone']; ?>"></td>
                        </tr>
                        <tr>
                            <td>아이디</td>
                            <td><input type = "text" size = "20" name = "username" value = "<?php echo $_SESSION['username']; ?>"></td>
                        </tr>
                        <tr>
                            <td>비밀번호</td>
                            <td><input type = "password" size = "20" name = "password" placeholder = "비밀번호"></td>
                        </tr>
                        <tr>
                            <td>이메일</td>
                            <td><input type = "text" size = "20" name = "email" placeholder = "이메일" value = "<?php echo $gande_member['email']; ?>"></td>
                        </tr>
                    </table>
                    <input type = "submit" value = "정보변경" />
                </fieldset>
            </form>
        </div>
    </body>
</html>
<?php 
    } else { // 로그인 되어 있지 않은 경우
        echo "<script>alert('로그인 후 이용해주세요.'); location.href='login.php';</script>";
        exit;
    }
?>