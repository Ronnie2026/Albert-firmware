/* Firmware entry: 0x48158202 */

undefined4 FUN_ram_48158202(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
    uVar3 = *(uint *)(iVar5 + 0x54);
    iVar2 = *(int *)(iVar5 + 0x10);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(iVar5 + 0x3c) == 1) {
        thunk_FUN_ram_481451e8(iVar2);
        puVar4 = *(undefined4 **)(iVar5 + 8);
        *(undefined4 *)(iVar5 + 0x3c) = 0;
        uVar3 = *(uint *)(iVar5 + 0x54);
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
      }
    }
    if (((uVar3 & 0x80) != 0) && (*(char *)(iVar5 + 0x68) != '\0')) {
      *(undefined1 *)(iVar5 + 0x68) = 0;
      FUN_ram_4814268a(FUN_ram_48156c38,iVar5);
    }
    puVar4 = (undefined4 *)(iVar2 + 0x98);
    iVar1 = 0;
    do {
      FUN_ram_4813a4a4(iVar2,iVar1,&DAT_ram_48237014);
      if (iVar2 != 0) {
        *puVar4 = 0;
        puVar4[3] = 0;
      }
      uVar3 = iVar1 + 1;
      FUN_ram_4813a504(iVar2,iVar1,0);
      puVar4 = puVar4 + 1;
      iVar1 = (int)(uVar3 * 0x1000000) >> 0x18;
    } while ((uVar3 & 0xff) != 3);
    FUN_ram_4813985e(iVar2,&DAT_ram_48236f9c,&DAT_ram_48236f9c,&DAT_ram_48236f9c);
    FUN_ram_48139dfe(iVar2);
    FUN_ram_4813a0f4(iVar2);
    if ((((*(uint *)(iVar5 + 0x54) & 1) != 0) && (*(int *)(iVar5 + 0x10) != 0)) &&
       (*(char *)(iVar5 + 0x44) == '\0')) {
      *(undefined1 *)(iVar5 + 0x44) = 1;
      FUN_ram_48142636(120000,FUN_ram_48157d72,iVar5);
    }
    FUN_ram_48157d0e(iVar5,3);
    return 0;
  }
  return 0x103;
}


