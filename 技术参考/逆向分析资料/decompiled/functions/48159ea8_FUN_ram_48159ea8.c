/* Firmware entry: 0x48159ea8 */

int FUN_ram_48159ea8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815d800();
  if (iVar1 == 0) {
    FUN_ram_4815d7e0(auStack_14);
    iVar1 = 0x102;
    if (param_1 != 0) {
      piVar2 = (int *)FUN_ram_4ff20824(0x10,2,0x1400,0x1800);
      iVar1 = 0x101;
      if (piVar2 != (int *)0x0) {
        FUN_ram_4815d248(piVar2,param_1);
        uVar3 = FUN_ram_4812e8c4();
        uVar4 = FUN_ram_4815d276();
        iVar1 = FUN_ram_4815d360(uVar4,piVar2,0,*(uint *)(param_1 + 0x10) / uVar3);
        if (iVar1 != 0) {
          if (*(code **)(*piVar2 + 4) == (code *)&LAB_ram_48159d44) {
            FUN_ram_4ff209c6();
          }
          else {
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
      }
    }
    FUN_ram_4815d7f0(auStack_14);
    return iVar1;
  }
  return iVar1;
}


