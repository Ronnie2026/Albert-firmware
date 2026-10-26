/* Firmware entry: 0x4819aad2 */

uint FUN_ram_4819aad2(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_ram_4819a44c();
  }
  if (((param_3[0x19] & 1) == 0) && ((*(ushort *)(param_3 + 3) & 0x200) == 0)) {
    FUN_ram_4ff21846(param_3[0x16]);
  }
  iVar1 = param_3[2] + -1;
  param_3[2] = iVar1;
  if (iVar1 < 0) {
    if ((int)param_3[6] <= iVar1) {
      if ((param_2 & 0xff) != 10) goto LAB_ram_4819ab20;
    }
    param_2 = __swbuf_r(param_1,param_2,param_3);
  }
  else {
LAB_ram_4819ab20:
    puVar2 = (undefined1 *)*param_3;
    *param_3 = puVar2 + 1;
    *puVar2 = (char)param_2;
    param_2 = param_2 & 0xff;
  }
  if (((param_3[0x19] & 1) == 0) && ((*(ushort *)(param_3 + 3) & 0x200) == 0)) {
    FUN_ram_4ff21966(param_3[0x16]);
  }
  return param_2;
}


