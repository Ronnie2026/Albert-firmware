/* Firmware entry: 0x4802f152 */

undefined4 FUN_ram_4802f152(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481df390);
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    iVar2 = (*(byte *)((int)param_2 + 0xf) & 0x7f) + 8;
  }
  else {
    iVar2 = 8;
    if (*param_2 != 0) {
      iVar2 = param_2[2] + 8;
    }
  }
  FUN_ram_4802a79a(param_1,iVar2);
  uVar3 = 0;
  if (*(char *)((int)param_2 + 0xf) < '\0') goto LAB_ram_4802f1d2;
  while ((*param_2 != 0 && (uVar3 < (uint)param_2[2]))) {
    while( true ) {
      uVar1 = FUN_ram_4802b236(param_2,uVar3);
      if ((uVar1 == 0x5c) || (uVar1 == 0x22)) {
        FUN_ram_4802af5a(param_1,0x5c);
        FUN_ram_4802af5a(param_1,uVar1);
      }
      else if (uVar1 == 10) {
        FUN_ram_4802af2c(param_1,&DAT_ram_481c3df4);
      }
      else if (0x1f < uVar1) {
        FUN_ram_4802af5a(param_1,uVar1);
      }
      uVar3 = uVar3 + 1;
      if (-1 < *(char *)((int)param_2 + 0xf)) break;
LAB_ram_4802f1d2:
      if ((*(byte *)((int)param_2 + 0xf) & 0x7f) <= uVar3) {
        return param_1;
      }
    }
  }
  return param_1;
}


