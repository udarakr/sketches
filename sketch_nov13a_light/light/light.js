$(function() {
$('button').on('click', function() {
    var self = $('.active');
	var val;
	if(self.attr('id') === "red"){
	val = 2;
	}else if(self.attr('id') === "orange"){
	val = 3
	}else{
	val = 1;
	}

	$.post( "serial_write.php", { light_val: val } );

    if (self.next().length) {
        self
            .removeClass('active')
            .next()
            .addClass('active');
    } else {
        self
            .removeClass('active')
            .parent()
            .find('span:first')
            .addClass('active');
    }
});
});
