/* Firmware entry: 0x480b31d8 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_cloud_settings_conflicts_480b31d8(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc9c != 0) && (DAT_ram_4ff6dc94 != 0)) {
    if (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0') {
      FUN_ram_480b294e();
      return;
    }
  }
  FUN_ram_4808cb66(0x1f7,"resource_wait");
  return;
}


