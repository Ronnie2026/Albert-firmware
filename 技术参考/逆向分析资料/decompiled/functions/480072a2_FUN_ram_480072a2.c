/* Firmware entry: 0x480072a2 */

undefined4 FUN_ram_480072a2(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 5) {
    iVar1 = FUN_ram_4800b400(param_1,0xffffffff);
    uVar2 = 0;
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      *puVar3 = 0x16;
      uVar2 = 0xffffffff;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 9;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


