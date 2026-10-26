/* Firmware entry: 0x48096a8e */

void FUN_ram_48096a8e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 0x17ec0) != 0) &&
     (iVar1 = FUN_ram_4ff3b5f0(*(int *)(param_1 + 0x17ec0),0), iVar1 == 1)) {
    iVar1 = param_2 + 0x874;
    FUN_ram_4ff3ec14(iVar1,0xffffffff);
    fence();
    if (((((*(char *)(param_1 + 0x18c6b) == '\0') || (fence(), *(char *)(param_1 + 0x18c68) == '\0')
          ) || (iVar2 = FUN_ram_4ff2bcc4(), iVar2 != 0)) ||
        ((fence(), *(char *)(param_1 + 0x18c6c) != '\0' || (*(char *)(param_2 + 0x883) != '\0'))))
       || ((*(char *)(param_2 + 0x881) != '\0' || (*(char *)(param_2 + 0x87e) != '\0')))) {
      FUN_ram_4ff3ee10(iVar1);
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x8a8) = param_3;
      *(undefined4 *)(param_2 + 0x8ac) = param_4;
      FUN_ram_4ff3ee10(iVar1);
      if ((iVar2 == 0) || (iVar2 = FUN_ram_4809660e(param_1,param_2,1), iVar2 != 0)) {
        iVar2 = FUN_ram_4809660e(param_1,param_2,0,1);
        if (iVar2 == 0) {
          FUN_ram_4ff3ec14(iVar1);
        }
        else {
          FUN_ram_4ff3ec14(iVar1,0xffffffff);
          *(undefined4 *)(param_2 + 0x8a8) = 0;
          *(undefined4 *)(param_2 + 0x8ac) = 0;
        }
      }
      else {
        FUN_ram_4ff3ec14(iVar1,0xffffffff);
      }
    }
    *(bool *)(param_2 + 0x2ea8) = *(int *)(param_2 + 0x2c) != 0;
    *(undefined1 *)(param_2 + 0x2ea9) = *(undefined1 *)(param_2 + 0x87d);
    *(undefined1 *)(param_2 + 0x2eaa) = *(undefined1 *)(param_2 + 0x87e);
    cVar3 = *(char *)(param_2 + 0x881);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_2 + 0x880);
    }
    *(char *)(param_2 + 0x2eab) = cVar3;
    *(undefined1 *)(param_2 + 0x2eac) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x2ead) = *(undefined1 *)(param_2 + 0x883);
    *(undefined4 *)(param_2 + 0x2eb0) = *(undefined4 *)(param_2 + 0x24);
    bVar4 = false;
    if (*(char *)(param_2 + 0x14) == '\x02') {
      bVar4 = 0x7f < *(ushort *)(param_2 + 0x3088);
    }
    *(bool *)(param_2 + 0x308c) = bVar4;
    FUN_ram_4ff3ee10(iVar1);
    FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 0x17ec0),0,0,0);
    return;
  }
  return;
}


