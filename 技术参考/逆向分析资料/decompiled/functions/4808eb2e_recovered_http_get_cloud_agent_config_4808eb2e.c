/* Firmware entry: 0x4808eb2e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_cloud_agent_config_4808eb2e(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4808cdaa();
  if (iVar1 == 0) {
    return;
  }
  if (DAT_ram_4ff6dc9c != 0) {
    FUN_ram_4808e6ee();
    return;
  }
  FUN_ram_4808cb66(0x1f7,"resource_wait");
  return;
}


