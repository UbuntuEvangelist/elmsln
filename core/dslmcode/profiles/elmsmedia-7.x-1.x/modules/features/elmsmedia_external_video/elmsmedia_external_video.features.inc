<?php
/**
 * @file
 * elmsmedia_external_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmsmedia_external_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function elmsmedia_external_video_node_info() {
  $items = array(
    'external_video' => array(
      'name' => t('External video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}