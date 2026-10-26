/* Firmware entry: 0x48188614 */

int FUN_ram_48188614(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_40 = 1;
  iVar1 = 0xb;
  do {
    iVar2 = FUN_ram_481a587a(&uStack_50,&DAT_ram_4ff6e2a4);
    iVar1 = iVar1 + -1;
    if (iVar2 == 0) {
      iVar1 = 0xb;
      while( true ) {
        iVar2 = FUN_ram_481a587a(&uStack_44,&DAT_ram_4ff6e2a8);
        iVar1 = iVar1 + -1;
        if (iVar2 == 0) {
          uStack_58 = 0x10;
          uStack_54 = 1;
          FUN_ram_481a5ca0(DAT_ram_4ff6e2a4,&uStack_58);
          uStack_58 = 0;
          FUN_ram_481a5ca0(DAT_ram_4ff6e2a8,&uStack_58);
          uStack_68 = 1;
          local_70 = 4;
          uStack_6c = 4;
          FUN_ram_481a5970(DAT_ram_4ff6e2a8,&local_70);
          local_70 = 4;
          uStack_6c = 4;
          uStack_68 = 1;
          FUN_ram_481a5970(DAT_ram_4ff6e2a4,&local_70);
          return 0;
        }
        if (iVar1 == 0) break;
        FUN_ram_4ff3c2b6(100);
      }
      DAT_ram_4ff6e2a8 = 0;
      FUN_ram_481a58b4(DAT_ram_4ff6e2a4);
LAB_ram_4818865c:
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"crypto_shared_gdma","E (%lu) %s: Failed to acquire DMA channel, Err=%d\n",
                       uVar3,"crypto_shared_gdma",iVar2);
      DAT_ram_4ff6e2a4 = 0;
      DAT_ram_4ff6e2a8 = 0;
      return iVar2;
    }
    if (iVar1 == 0) {
      DAT_ram_4ff6e2a4 = 0;
      goto LAB_ram_4818865c;
    }
    FUN_ram_4ff3c2b6(100);
  } while( true );
}


