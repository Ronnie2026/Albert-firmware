/* Firmware entry: 0x48168530 */

int FUN_ram_48168530(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x44) = param_2;
  iStack_14 = param_1;
  iVar2 = FUN_ram_481672be();
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48168200(iStack_14,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(char *)(iStack_14 + 0xc4) != '\0') &&
       (piVar4 = (int *)FUN_ram_4819bf88(), *piVar4 == 0xb)) {
      return 0x7007;
    }
  }
  else if ((*(char *)(iStack_14 + 0xc4) != '\0') && (iVar2 == 0x7006)) {
    return 0x7007;
  }
  iVar1 = iStack_14;
  uVar3 = FUN_ram_48193390(*(undefined4 *)(iStack_14 + 0x1c));
  if (*(code **)(iVar1 + 0x84) != (code *)0x0) {
    *(undefined4 *)(iVar1 + 0xa0) = uVar3;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(iVar1 + 0x28);
    (**(code **)(iVar1 + 0x84))(iVar1 + 0x98);
  }
  FUN_ram_481667a6(0,&iStack_14,4);
  return iVar2;
}


