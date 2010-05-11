<?php

/**
 * @file
 * Provides support for the Views module.
 */
 
/**
 * Implementation of hook_views_data().
 */
function groupshort_views_data() {
  $data	= array();
  
  $data['groupshort_links']['table']['group'] = t('GroupShort');
  $data['groupshort_links']['table']['join']['node'] = array(
    'left_field' => 'vid',
    'field' => 'vid',
  );


	$data['groupshort_links']['code'] = array(
	  'title' => t('Shortcut'),
	  'help' => t('The supplied shortcut for the link'),
	  'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
 	);
	
	$data['groupshort_links']['url'] = array(
	  'title' => t('URL'),
	  'help' => t('The supplied url for the link'),
	  'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
	);
  
  return $data;
}