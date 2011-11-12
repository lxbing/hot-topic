<?php
/**
 * @file
 * hot_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_topic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hot_topic_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function hot_topic_node_info() {
  $items = array(
    'hot_topic' => array(
      'name' => t('hot-topic'),
      'base' => 'node_content',
      'description' => t('一些关于羽协的讨论，包括部门工作，近期活动以及社团费用的支出情况。'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
