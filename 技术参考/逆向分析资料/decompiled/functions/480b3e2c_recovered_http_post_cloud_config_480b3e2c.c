/* Firmware entry: 0x480b3e2c */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_config_480b3e2c(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4808cdaa();
  if (iVar1 == 0) {
    return;
  }
  if ((DAT_ram_4ff6dcc8 != 0) && (DAT_ram_4ff6dcc4 != 0)) {
    FUN_ram_480b3dca();
    return;
  }
  FUN_ram_4808cb66(0x1f7,"resource_error");
  return;
}


