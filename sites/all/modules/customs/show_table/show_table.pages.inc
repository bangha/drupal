<?php
//function trong_name_exits($value){
  // 'menu-' is added to the menu name to avoid name-space conflicts.
//return $value == 'trong';
//}

/**
* Implements hook_elements();
*/
/*
function dnd_fields_element_info(){
    return array(
        'dnd_fields_attribute' => array(
            '#input' => true,
            '#tree' => true,
            '#process' => array('dnd_fields_attribute_process'),
            '#element_validate' => array('dnd_fields_element_validate'),
            '#theme' => array('dnd_fields_element'),
            '#theme_wrappers' => array('form_element'),
        ),
    );
}

function dnd_fields_attribute_process($element, &$form_state){
    $instance = array(
        'filed_name' => 'dnd_fields_ability',
        'settings' => array(),
        'widget' => array(
            'type' => 'dnd_fields_ability',
        ),
    );
    
    $form = array();
    $field = array(
        'settings' => array('abilities' => array())
    );
    $langcode = LANGUAGE_NODE;
    $items = array();
    $delta = 0;
    $form_state['field'] = array(
        'dnd_fields_ability' => array(
            $langcode = array(
                'field' => array(
                    'type' => 'dnd_fields_ability',
                    'cardinality' => 6,
                    'settings' => array(),
                ),
            ),
        ),
    );
    
    $element = dnd_fields_field_widget_form($form, $form_state, $field, $instance, $langcode, $items, $delta, $element);
    return $element;
};

function dnd_fields_attribute_process($element, &$form_state) {
  $fields = array(
    'ability' => t('Ability'),
    'score' => t('Score'),
    'mod' => t('Modifier'),
    'tempscore' => t('Temp score'),
    'tempmod' => t('Temp modifier'),
  );

  foreach ($fields as $key => $label) {
    $element[$key] = array(
      '#attributes' => array('class' => array('edit-dnd-fields-ability'), 'title' => t('')),
      '#type' => 'textfield',
      '#size' => 3,
      '#maxlength' => 3,
      '#title' => $label,
      //'#default_value' => NULL,
      //'#prefix' => '<div class="dnd-fields-ability-field dnd-fields-ability-' . $key . '-field">',
      //'#suffix' => '</div>',
    );
  }

  return $element;
}

function theme_dnd_fields_element($variables) {
  $element = $variables['element'];

  $attributes = array();
  if (isset($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = (array) $element['#attributes']['class'];
  }
  $attributes['class'][] = 'dnd-fields-ability';

  // This wrapper is required to apply JS behaviors and CSS styling.
  $output = '';
  $output .= '<div' . drupal_attributes($attributes) . '>';
  $output .= drupal_render_children($element);
  $output .= '</div>';
  return $output;
}
*/
function options_table_form($form, &$form_state){
    $form['check_type'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Choose node type display'),
        //'#default_value' => variable_get('check_type', array('article')),
        '#options' => array(
            'article'   => t('Article'),
            'page'      => t('Base page')
        ),
        
        
    );
    
    $form['status'] = array(
        '#type' => 'radios',
        '#title' => t('Status publish'),
        '#options' => array(0 => t('No publish'), 1 => t('published')),
        '#default_value' => variable_get('status', 1),
    );
    
    $form['limit'] = array(
        '#type' => 'textfield',
        '#title' => t('limit'),
        '#default_value' => variable_get('limit', 10),
        '#size' => 2,
    );
    /*
    $form['michine_name'] = array(
        '#type' => 'machine_name',
        '#title' => t('michine name'),
        //'#default_value' => $vocabulary->machine_name,
        '#maxlength' => 21,
        '#machine_name' => array(
            'exists' => 'trong_name_exits'
        )
    );
    
    $form['email'] = array(
        '#type' => 'textfield',
        '#title' => t('Email')
    );
    
    $form['file'] = array(
        '#type' => 'file',
        '#title' => t('Upload file'),
    );
    
    $form['form'] = array(
        '#markup' => '<span>markup</span>'
    );
    
    $form['select_list'] = array(
        '#type' => 'select',
        '#options' => list_node_content(),
        
    );
    
    
    $form['managed_file'] = array(
        '#title'    => t('Image'),
        '#type'     => 'managed_file',
        '#upload_location' => 'public://image_example_images/',
        '#default_value' => variable_get('image_example_image_fid', ''),
    );
    
    
    $header = array(
        'title' => array('data' => t('Title')),
        'type' => array('data' => t('Type')),
    );
    
    $options[] = array(
        'title' => 'gh',
        'type' => 'ghf',
    );
    
    $options[] = array(
        'title' => 'bc',
        'type' => 'ef',
    );
    
    $form['nodes'] = array(
        '#type' => 'tableselect',
        '#header' => $header,
        '#options' => $options,
        '#empty' => t('No content available')
    );
    
    
    $form['description'] = array(
        '#title' => t('Description'),
        '#type' => 'text_format',
    );
    
    $form['visibility'] = array(
        '#type' => 'vertical_tabs',
      );

  // Per-path visibility.
  $form['visibility']['path'] = array(
    '#type' => 'fieldset',
    '#title' => t('Pages'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'visibility',
    '#weight' => 0,
  );
   $form['visibility']['path']['yu'] = array(
    '#markup' => '<span>markup</span>'
  );
     $form['visibility']['abc'] = array(
    '#type' => 'fieldset',
    '#title' => t('abc'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'visibility',
    '#weight' => 0,
  );
    
    $form['test_element'] = array(
        '#type' => 'dnd_fields_attribute',
        '#title' => t('Test Element Info'),
    );
    */
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );
    
    return $form;
    //return system_settings_form($form);
}

function options_table_form_validate($form, &$form_state){
    /*
    $email = $form_state['values']['email'];
    if(!valid_email_address($email)){
        form_set_error('email', t('The email address appears to be invalid.'));
    }
    */
    
    $limit = $form_state['values']['limit'];
    if(!is_numeric($limit)){
        form_set_error('limit', t('You must enter a number for the maximum be positive.'));
    }
    else if($limit <= 0){
        form_set_error('limit', t('Maximum number of posts to display must be positive'));
    }
}

function options_table_form_submit($form, &$form_state) {
  drupal_set_message(t('Submitting values: @values', array('@values' => var_export($form_state['values'], TRUE))));
}


function list_node_content(){
    $query = db_select('node', 'n')
            ->fields('n', array('nid', 'title'));
            return $query->execute()->fetchAllKeyed();
}

function show_table_content(){
    
    $max_num = variable_get('limit', 10);
    
    $header = array(
        /*
        array(
            'data' => t('ID'),
            'filed' => 'n.nid'
        ),*/
        array(
            'data' => t('Title'),
            'field' => 'n.title'
        ),
        array(
            'data' => t('Name'),
            'field' => 'nt.name'
        )
    );
    $query = db_select('node', 'n')->extend('PagerDefault');
    $query->fields('n', array('nid', 'title'));
    $query->join('node_type', 'nt', 'n.type = nt.type');
    $query->fields('nt', array('name'));
    $query->limit($max_num);
    $query->orderBy('n.title');
    $result = $query->execute();
    
    $rows = array();
    
    foreach($result as $row){
        //$rows[] = array('data' => (array) $row);
        $rows[] = array(
        l($row->title, 'node/'. $row->nid),
        $row->name,
        );
    }
    $build['show_table'] = array(
        '#theme' =>'table',
        '#header' => $header,
        '#rows' => $rows
        );
    $build['pager_pager'] = array('#theme' => 'pager');
    return $build;
}
