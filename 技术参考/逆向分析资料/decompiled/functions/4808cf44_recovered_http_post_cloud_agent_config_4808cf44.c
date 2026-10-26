/* Firmware entry: 0x4808cf44 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_agent_config_4808cf44(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4808cdaa();
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_4808cb66(0x199,"unified_backend_use_cloud_config");
  return;
}


