/* Firmware entry: 0x481a5b64 */

undefined4 FUN_ram_481a5b64(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[5];
    if (uVar1 == 0x3f) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,
                       "E (%lu) %s: %s(%d): no peripheral is connected to the channel\n",uVar2,
                       &DAT_ram_481e0c8c,"gdma_disconnect",0x13e);
      uVar2 = 0x103;
    }
    else {
      piVar5 = (int *)*param_1;
      iVar3 = param_1[4];
      iVar4 = *piVar5;
      if (iVar3 == 0) {
        if (-1 < (int)uVar1) {
          FUN_ram_4ff3ec14(iVar4 + 100,0xffffffff);
          *(uint *)(iVar4 + 0x6c) = ~(1 << (uVar1 & 0x1f)) & *(uint *)(iVar4 + 0x6c);
          FUN_ram_4ff3ee10(iVar4 + 100);
          iVar3 = param_1[4];
        }
      }
      else if (-1 < (int)uVar1) {
        FUN_ram_4ff3ec14(iVar4 + 100,0xffffffff);
        *(uint *)(iVar4 + 0x70) = ~(1 << (uVar1 & 0x1f)) & *(uint *)(iVar4 + 0x70);
        FUN_ram_4ff3ee10(iVar4 + 100);
        iVar3 = param_1[4];
      }
      FUN_ram_481a8eb0(iVar4 + 8,piVar5[1],iVar3);
      param_1[5] = 0x3f;
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar2,
                   &DAT_ram_481e0c8c,"gdma_disconnect",0x13d);
  return 0x102;
}


