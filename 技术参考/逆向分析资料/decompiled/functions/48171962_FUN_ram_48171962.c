/* Firmware entry: 0x48171962 */

undefined4 FUN_ram_48171962(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0xffff9f00;
  }
  memset(param_1,0,0x44);
  pcVar2 = *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 +
                              (*(byte *)(param_2 + 7) & 0x7c)) + 0x24);
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)();
    param_1[0xf] = iVar1;
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffff9e80;
    }
  }
  *param_1 = param_2;
  return 0;
}


