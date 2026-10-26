/* Firmware entry: 0x4814ceda */

undefined4 FUN_ram_4814ceda(int param_1)

{
  code *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x14);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,*(undefined4 *)(param_1 + 0x10));
    return 0;
  }
  return 0;
}


