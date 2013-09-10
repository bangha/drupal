<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of d2t_car
 *
 * @author Dam
 */
class D2TCarController extends EntityAPIController {
  
  //$controller = entity_get_controller('d2t_car');
  //$controller->addData(array('name' => 'Trong Dam'));
  function addData(array $values = array()){
    $create = $this->create($values);
    $print = $this->save($create);
    dvm($print);
    //$this->save($entity);
  }
}
