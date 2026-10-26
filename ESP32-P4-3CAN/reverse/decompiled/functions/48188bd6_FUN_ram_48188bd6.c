/* Firmware entry: 0x48188bd6 */

undefined4 FUN_ram_48188bd6(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x158) & 0x800) != 0) {
    param_1 = param_1 + 0x168;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 == param_3) &&
         (iVar3 = FUN_ram_4ff4511a(*(undefined4 *)(param_1 + 8),param_2,param_3), iVar3 == 0)) {
        return 0;
      }
      if ((((iVar1 == 4) && (pcVar4 = *(char **)(param_1 + 8), *pcVar4 == 'U')) &&
          (pcVar4[1] == '\x1d')) && ((pcVar4[2] == '%' && (pcVar4[3] == '\0')))) {
        return 0;
      }
      param_1 = *(int *)(param_1 + 0xc);
    } while (param_1 != 0);
    uVar2 = 0xffffd800;
  }
  return uVar2;
}


