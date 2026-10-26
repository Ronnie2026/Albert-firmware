/* Firmware entry: 0x48021a4e */

void FUN_ram_48021a4e(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iStack_58;
  uint uStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  
  iStack_58 = 0;
  uStack_54 = 0;
  pcStack_50 = (char *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  pcStack_44 = (code *)0x0;
  do {
    FUN_ram_4ff3c2b6(100);
    iVar2 = FUN_ram_48010176();
  } while (iVar2 == 0);
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Starting SDIO process rx task\n",uVar3,"H_SDIO_DRV");
  do {
    while( true ) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dbb8,0xffffffff);
      iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2e8,&iStack_58,0);
      if (((iVar2 == 0) ||
          (iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2ec,&iStack_58,0),
          iVar2 == 0)) ||
         (iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2f0,&iStack_58,0),
         iVar2 == 0)) break;
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: No element in any queue found\n",uVar3,
                       "H_SDIO_DRV");
    }
    uVar6 = uStack_54 & 0xff;
    if (uVar6 == 3) {
      thunk_FUN_ram_4801129e(&iStack_58);
    }
    else if ((uVar6 - 1 & 0xff) < 2) {
      if ((*(int *)(&DAT_ram_4ff5b210 + uVar6 * 4) != 0) &&
         (*(int *)(*(int *)(&DAT_ram_4ff5b210 + uVar6 * 4) + 0x10) != 0)) {
        if (pcStack_50 != (char *)0x0) {
          if ((ushort)(uStack_4c._2_2_ - 1U) < 0x5f4) {
            iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(uStack_4c._2_2_);
            if (iVar2 == 0) {
              FUN_ram_4ff2b96c(6,uStack_4c._2_2_);
            }
            else {
              FUN_ram_4ff45158(iVar2,pcStack_50);
              if ((pcStack_44 != (code *)0x0) && (iStack_58 != 0)) {
                (*pcStack_44)();
                iStack_58 = 0;
              }
              pcVar5 = (code *)(*(undefined4 **)(&DAT_ram_4ff5b210 + (uStack_54 & 0xff) * 4))[4];
              iVar4 = (*pcVar5)(**(undefined4 **)(&DAT_ram_4ff5b210 + (uStack_54 & 0xff) * 4),iVar2,
                                iVar2,uStack_4c._2_2_,pcVar5);
              if (iVar4 != 0) {
                FUN_ram_4ff2b96c(7,uStack_4c._2_2_);
                (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar2);
              }
            }
            goto LAB_ram_48021b7a;
          }
        }
        FUN_ram_4ff2b96c(1);
      }
    }
    else if (uVar6 == 5) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Received ESP_PRIV_IF type message\n",uVar3,
                       "H_SDIO_DRV");
      FUN_ram_48010824(&iStack_58);
      FUN_ram_480219d0();
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Received INIT event\n",uVar3,"H_SDIO_DRV");
      pcVar1 = pcStack_50;
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Event type: 0x%x\n",uVar3,"H_SDIO_DRV",*pcVar1);
      if (*pcVar1 != '\"') {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"H_SDIO_DRV","W (%lu) %s: Not an ESP_PRIV_EVENT_INIT event: 0x%x\n",uVar3
                         ,"H_SDIO_DRV",*pcVar1);
      }
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Write thread started\n",uVar3,"H_SDIO_DRV");
      DAT_ram_4ff6dbac = 1;
    }
    else if (uVar6 == 4) {
      FUN_ram_480219ca(pcStack_50,uStack_4c._2_2_);
    }
    else if (uVar6 != 6) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"H_SDIO_DRV","W (%lu) %s: unknown type %d \n",uVar3,"H_SDIO_DRV",
                       uStack_54 & 0xff);
    }
LAB_ram_48021b7a:
    if (((uStack_48._2_1_ == '\0') && (pcStack_44 != (code *)0x0)) && (iStack_58 != 0)) {
      (*pcStack_44)();
      iStack_58 = 0;
    }
  } while( true );
}


