/* Firmware entry: 0x4800726a */

undefined4 FUN_ram_4800726a(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 5) {
    if ((param_2 != 0) || (iVar1 = FUN_ram_4800bb96(), uVar3 = 0, iVar1 != 0)) {
      puVar2 = (undefined4 *)FUN_ram_4819bf88();
      *puVar2 = 0x16;
      uVar3 = 0xffffffff;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 9;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


