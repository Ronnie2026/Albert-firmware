/* Firmware entry: 0x4816f8a8 */

undefined4 FUN_ram_4816f8a8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[1] < 0x1b) {
    return 0;
  }
  if ((param_1[2] != 3) && (*(char *)(*param_1 + 0xf) != '\0')) {
    iVar1 = *param_1 + 0x74;
    iVar2 = FUN_ram_4ff4511a(param_1[0x19],iVar1,8);
    if ((0 < iVar2) || (iVar1 = FUN_ram_4ff4511a(param_1 + 0x30,iVar1,8), 0 < iVar1)) {
      uVar3 = FUN_ram_4816ab00(param_1);
      return uVar3;
    }
  }
  return 0;
}


