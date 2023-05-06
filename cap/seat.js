const seats = document.querySelectorAll('.seat');

function toggleSeat() {
  this.classList.toggle('selected');
}

seats.forEach(seat => {
  seat.addEventListener('click', toggleSeat);
});
