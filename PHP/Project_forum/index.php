<!doctype html>
<html lang="en">

<head>
  <!-- Required meta tags -->
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">

  <!-- Bootstrap CSS -->
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css" rel="stylesheet"
    integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6" crossorigin="anonymous">

  <title>Welcome to Idiscuss - Coding-form</title>
</head>

<body>
  <?php include 'partials/_header.php'; ?>
  <?php include 'partials/_db_connect.php'; ?>
  <!-- Slider starts here -->
  <div id="carouselExampleIndicators" class="carousel slide" data-bs-ride="carousel">
    <div class="carousel-indicators">
      <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="0" class="active"
        aria-current="true" aria-label="Slide 1"></button>
      <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="1"
        aria-label="Slide 2"></button>
      <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="2"
        aria-label="Slide 3"></button>
    </div>
    <div class="carousel-inner">
      <div class="carousel-item active">
        <img src="https://source.unsplash.com/2400x700/?machine" class="d-block w-100" alt="...">
        <!-- <img src="https://source.unsplash.com/2400x700/?apple,code" class="d-block w-100" alt="..."> -->
      </div>
      <div class="carousel-item">
        <img src="https://source.unsplash.com/2400x700/?bitcoin,crypto" class="d-block w-100" alt="...">
      </div>
      <div class="carousel-item">
        <img src="https://source.unsplash.com/2400x700/?hardware,electronics" class="d-block w-100" alt="...">
      </div>
    </div>
    <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleIndicators"
      data-bs-slide="prev">
      <span class="carousel-control-prev-icon" aria-hidden="true"></span>
      <span class="visually-hidden">Previous</span>
    </button>
    <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleIndicators"
      data-bs-slide="next">
      <span class="carousel-control-next-icon" aria-hidden="true"></span>
      <span class="visually-hidden">Next</span>
    </button>
  </div>
  <!-- Category containers starts here -->
  <div class="container">
    <h2 class='text-center'>iDiscuss - Categories</h2>
    <div class="row">
      <!-- Fetch all the categories -->
      <?php
        $sql = "SELECT * FROM `categories`";
        $result = mysqli_query($conn,$sql);
        while($row = mysqli_fetch_assoc($result)){
          $cat = $row['category_name'];
          $desc = $row['category_description'];
          echo '<div class="col-md-4">
          <div class="card" style="width: 18rem;">
            <img src="https://source.unsplash.com/2400x2000/?',$cat.'" class="card-img-top" alt="...">
            <div class="card-body">
              <h5 class="card-title"><a href="threadslist.php?catid='.$row['category_id'].'">'.$cat.'</a></h5>
              <p class="card-text">'.$desc.'</p>
              <a href="threadslist.php?catid='.$row['category_id'].'" class="btn btn-primary">View Threads</a>
            </div>
          </div>
        </div>';
          }
        ?>
      <!-- for loop  -->
      <!-- <div class="col-md-4">
        <div class="card" style="width: 18rem;">
          <img src="https://source.unsplash.com/500x400/?coding,python" class="card-img-top" alt="...">
          <div class="card-body">
            <h5 class="card-title">Card title</h5>
            <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's
              content.</p>
            <a href="#" class="btn btn-primary">View Threads</a>
          </div>
        </div>
      </div> -->
      <!-- <div class="col-md-4">
        <div class="card" style="width: 18rem;">
          <img src="https://source.unsplash.com/500x400/?coding,python" class="card-img-top" alt="...">
          <div class="card-body">
            <h5 class="card-title">Card title</h5>
            <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's
              content.</p>
            <a href="#" class="btn btn-primary">View Threads</a>
          </div>
        </div> -->
      </div>
    </div>
  </div>
  <?php include 'partials/_footer.php'; ?>

  <!-- Optional JavaScript; choose one of the two! -->

  <!-- Option 1: Bootstrap Bundle with Popper -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf"
    crossorigin="anonymous"></script>

  <!-- Option 2: Separate Popper and Bootstrap JS -->
  <!--
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js" integrity="sha384-SR1sx49pcuLnqZUnnPwx6FCym0wLsk5JZuNx2bPPENzswTNFaQU1RDvt3wT4gWFG" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.min.js" integrity="sha384-j0CNLUeiqtyaRmlzUHCPZ+Gy5fQu0dQ6eZ/xAww941Ai1SxSY+0EQqNXNE6DZiVc" crossorigin="anonymous"></script>
    -->
</body>

</html>