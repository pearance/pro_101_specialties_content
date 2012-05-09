<?php
/**
 * @file
 * pro_101_specialties_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_specialties_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:specialties
  $menu_links['main-menu:specialties'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialties',
    'router_path' => 'specialties',
    'link_title' => 'Specialties',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Specialties');


  return $menu_links;
}
