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

	function isJapanMade(){
		$arr_manufacturer = array('toyota', 'honda', 'suzuki');
		$str_manufacturer = strtolower($this->manufacturer);

		if(in_array($str_manufacturer, $arr_manufacturer)){
			return TRUE;
		}
		else{
			return FALSE;
		}
	}

	/**
	*$obj = entity_load_single('d2t_car', 9);
	*$test = $obj->delCar();
	*dvm($test);
	*/
	function delCar(){
		$count = count(entity_load($this->entityType()));
		if($count > 3){
			//$id = $this->identifier();
			$id = $this->internalIdentifier();
			$rs = entity_get_controller($this->entityType)->delete(array($id));
			if($rs = null){
				return FALSE;
			}else{
				return TRUE;
			}
			//parent::delete();
		}
		else{
			return FALSE;
		}
	}
}