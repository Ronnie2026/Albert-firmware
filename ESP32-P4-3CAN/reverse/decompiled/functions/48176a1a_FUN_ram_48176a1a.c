/* Firmware entry: 0x48176a1a */

void FUN_ram_48176a1a(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((uint *)*param_1 == (uint *)0x0) {
    return;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) goto LAB_ram_48176a54;
  uVar2 = *(uint *)*param_1;
  if (uVar2 == 9) {
LAB_ram_48176a96:
    FUN_ram_4817c6c8();
    iVar1 = param_1[1];
  }
  else if (uVar2 < 10) {
    if (uVar2 == 5) {
      FUN_ram_4817c428();
      iVar1 = param_1[1];
    }
    else {
      if (uVar2 == 8) goto LAB_ram_48176a96;
      if (uVar2 == 3) {
        FUN_ram_4817e1fc();
        iVar1 = param_1[1];
      }
    }
  }
  else if ((uVar2 == 10) || (uVar2 == 0xb)) {
    FUN_ram_4817ca0a();
    iVar1 = param_1[1];
  }
  thunk_FUN_ram_4ff209c6(iVar1);
LAB_ram_48176a54:
  if (param_1[2] != 0) {
    FUN_ram_48178b14(param_1[2],(uint)*(byte *)(*param_1 + 5) << 1);
  }
  FUN_ram_48178af2(param_1,0xc);
  return;
}


