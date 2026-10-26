/* Firmware entry: 0x4ff38518 */

void FUN_ram_4ff38518(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar4 = &DAT_ram_4ff5a04c;
  iVar2 = 0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar1 != -0x5b) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1064);
  uVar3 = FUN_ram_4ff44cee();
  ets_printf(s_I___lu___s__Core_dump_used__lu_b_ram_4ff55970,uVar3,
             s_Pesp_core_dump_common_ram_4ff5831b + 1,(param_1 + -0x4ff5a04c) - iVar2,iVar2);
  return;
}


