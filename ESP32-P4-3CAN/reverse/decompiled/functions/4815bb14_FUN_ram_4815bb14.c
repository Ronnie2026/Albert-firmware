/* Firmware entry: 0x4815bb14 */

undefined4 FUN_ram_4815bb14(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == 0xfffffff8) {
    return 0xffffffff;
  }
  param_2[3] = param_2[3] + 0x7e;
  if (uVar2 != 0xfffffffc) {
    if (uVar2 < 0xfffffffd) {
      if (uVar2 == 0) {
        return 0x103;
      }
      if (uVar2 == 0xfffffff0) {
LAB_ram_4815bb42:
        param_2[1] = param_2[1] + 0x7e;
        return 0;
      }
    }
    else {
      if (uVar2 == 0xfffffffe) goto LAB_ram_4815bb4e;
      if (uVar2 == 0xffffffff) goto LAB_ram_4815bb42;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("nvs_page.cpp",0x4a5,"esp_err_t nvs::Page::calcEntries(nvs_stats_t&)",
                     "false && \"Unhandled state\"");
  }
LAB_ram_4815bb4e:
  uVar1 = *(ushort *)(param_1 + 0x40);
  param_2[1] = (param_2[1] + 0x7e) - (uint)uVar1;
  *param_2 = *param_2 + (uint)uVar1;
  return 0;
}


