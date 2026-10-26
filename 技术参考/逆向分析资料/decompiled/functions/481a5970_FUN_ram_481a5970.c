/* Firmware entry: 0x481a5970 */

undefined4 FUN_ram_481a5970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar1,
                     &DAT_ram_481e0c8c,"gdma_connect",0x113);
    return 0x102;
  }
  if (param_1[5] == 0x3f) {
    piVar6 = (int *)*param_1;
    iVar5 = *piVar6;
    if ((param_2[2] != -1) && (*(int *)(iVar5 + 4) != param_2[2])) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,
                       "E (%lu) %s: %s(%d): peripheral and DMA system bus mismatch\n",uVar1,
                       &DAT_ram_481e0c8c,"gdma_connect",0x11b);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
    iVar2 = param_1[4];
    uVar4 = param_2[1];
    if (iVar2 == 0) {
      if (-1 < (int)uVar4) {
        FUN_ram_4ff3ec14(iVar5 + 100,0xffffffff);
        uVar3 = 1 << (uVar4 & 0x1f);
        if ((*(uint *)(iVar5 + 0x6c) & uVar3) != 0) goto LAB_ram_481a5a9c;
        *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) | uVar3;
        FUN_ram_4ff3ee10(iVar5 + 100);
        iVar2 = param_1[4];
      }
    }
    else if (-1 < (int)uVar4) {
      FUN_ram_4ff3ec14(iVar5 + 100,0xffffffff);
      uVar3 = 1 << (uVar4 & 0x1f);
      if ((*(uint *)(iVar5 + 0x70) & uVar3) != 0) {
LAB_ram_481a5a9c:
        FUN_ram_4ff3ee10(iVar5 + 100);
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,
                         "E (%lu) %s: %s(%d): peripheral %d is already used by another channel\n",
                         uVar1,&DAT_ram_481e0c8c,"gdma_connect",0x135,uVar4);
        goto LAB_ram_481a5ae8;
      }
      *(uint *)(iVar5 + 0x70) = *(uint *)(iVar5 + 0x70) | uVar3;
      FUN_ram_4ff3ee10(iVar5 + 100);
      iVar2 = param_1[4];
    }
    FUN_ram_481a8eac(iVar5 + 8,piVar6[1],iVar2,*param_2,uVar4);
    param_1[5] = uVar4;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): channel is using by peripheral: %d\n",
                     uVar1,&DAT_ram_481e0c8c,"gdma_connect",0x114,param_1[5]);
LAB_ram_481a5ae8:
    uVar1 = 0x103;
  }
  return uVar1;
}


