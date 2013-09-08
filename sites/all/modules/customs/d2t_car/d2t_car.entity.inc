<?php
class D2TCar extends Entity {

	function isOld(){
		$create_time = strtotime($this->created);
		$set_time    = strtotime('2013-09-01');

		if($create_time > $set_time){
			return TRUE;
		}else{
			return FALSE;
		}
	}

	public function isJapanMade(){
		$arr_manufacturer = array('toyota', 'honda', 'suzuki');
		$str_manufacturer = strtolower($this->manufacturer);

		if(in_array($str_manufacturer, $arr_manufacturer)){
			return TRUE;
		}
		else{
			return FALSE;
		}
	}

	public function delete(){
		parent::delete();
	}
}