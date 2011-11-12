<?php
/**
 * @file
 * hot_topic.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hot_topic_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:http://yuxieswufe/hottopics
  $menu_links['main-menu:http://yuxieswufe/hottopics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://yuxieswufe/hottopics',
    'router_path' => '',
    'link_title' => '热门话题',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('热门话题');


  return $menu_links;
}
