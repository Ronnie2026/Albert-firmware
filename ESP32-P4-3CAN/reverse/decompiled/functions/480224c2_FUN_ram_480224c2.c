/* Firmware entry: 0x480224c2 */

void FUN_ram_480224c2(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint auStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dbcc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x3d2,"sdio_read_task","sdio_handle");
  }
  do {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(100);
    iVar3 = FUN_ram_48010176();
  } while (iVar3 == 0);
  DAT_ram_4ff6dbd4 = (uint *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0x18))(0x14,0x40);
  while (DAT_ram_4ff6dbd4 == (uint *)0x0) {
    FUN_ram_4ff2b990(6,0x101,0x14);
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(5);
    DAT_ram_4ff6dbd4 = (uint *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0x18))(0x14,0x40);
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: SDIO Host operating in STREAMING MODE\n",uVar4,
                   "H_SDIO_DRV");
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Open data path at slave\n",uVar4,"H_SDIO_DRV");
  auStack_44[0] = CONCAT31(auStack_44[0]._1_3_,1);
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0xcc))
            (DAT_ram_4ff6dbcc,0x3ff5508c,auStack_44,1,0,*(code **)(PTR_PTR_ram_4ff47e40 + 0xcc));
LAB_ram_480225be:
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xd8))(DAT_ram_4ff6dbcc,0xffffffff),
              iVar3 != 0) {
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: wait_slave_intr error: %d\n",uVar4,
                           "H_SDIO_DRV",iVar3);
        }
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbd8,0xffffffff);
        iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 200))
                          (DAT_ram_4ff6dbcc,0x3ff55050,DAT_ram_4ff6dbd4,0x14,0,
                           *(code **)(PTR_PTR_ram_4ff47e40 + 200));
        puVar2 = DAT_ram_4ff6dbd4;
        if (iVar3 == 0) break;
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: failed to read registers\n",uVar4,"H_SDIO_DRV")
        ;
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"H_SDIO_DRV",
                         "I (%lu) %s: Host is resetting itself, to avoid any sdio race condition\n",
                         uVar4,"H_SDIO_DRV");
        FUN_ram_4ff2b990(3,iVar3,0x14);
      }
      uVar5 = *DAT_ram_4ff6dbd4;
      auStack_44[0] = uVar5;
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0xcc))
                (DAT_ram_4ff6dbcc,0x3ff550d4,auStack_44,4,0,*(code **)(PTR_PTR_ram_4ff47e40 + 0xcc))
      ;
      if ((uVar5 & 0x80) != 0) {
        DAT_ram_4ff6db54 = 1;
      }
      if ((uVar5 & 0x40) != 0) {
        DAT_ram_4ff6db54 = 0;
      }
      if ((int)(uVar5 << 8) < 0) break;
LAB_ram_48022778:
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
    }
    uVar5 = puVar2[4] & 0xfffff;
    if (uVar5 < DAT_ram_4ff6dbb0) {
      uVar5 = (0x100000 - DAT_ram_4ff6dbb0) + uVar5;
      if (uVar5 == 0) {
LAB_ram_48022750:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"H_SDIO_DRV","W (%lu) %s: invalid ret or len_from_slave: %d %ld\n",uVar4,
                         "H_SDIO_DRV",0,0);
        goto LAB_ram_48022778;
      }
      if (0xfffff < uVar5 - 1) {
        FUN_ram_4ff2b990(5,0x104,uVar5);
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
        goto LAB_ram_480225be;
      }
    }
    else {
      uVar5 = uVar5 - DAT_ram_4ff6dbb0 & 0xfffff;
      if (uVar5 == 0) goto LAB_ram_48022750;
    }
    iVar3 = DAT_ram_4ff48620 * 2;
    iVar1 = DAT_ram_4ff48620 * 2;
    while (uVar6 = FUN_ram_48120800(&DAT_ram_4ff48608 + iVar1,&DAT_ram_4ff4860c + iVar3,
                                    uVar5 + 0x1ff & 0xfffffe00), (int)uVar6 == 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8,(int)((ulonglong)uVar6 >> 0x20),0)
      ;
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(5);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbd8,0xffffffff);
    }
    iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xd0))
                      (DAT_ram_4ff6dbcc,0x1f800 - uVar5,(int)uVar6,uVar5 + 0x1ff & 0xfe00,0,
                       *(code **)(PTR_PTR_ram_4ff47e40 + 0xd0));
    if (iVar3 == 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
      DAT_ram_4ff6dbb0 = DAT_ram_4ff6dbb0 + uVar5 & 0xfffff;
      if ((int)DAT_ram_4ff48618 < 0) {
        DAT_ram_4ff48618 = DAT_ram_4ff48620;
        DAT_ram_4ff4861c = uVar5;
        DAT_ram_4ff48620 = (uint)(DAT_ram_4ff48620 == 0);
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x60))(DAT_ram_4ff6dba8);
      }
      else {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: task still writing Rx data to queue!\n",uVar4,
                         "H_SDIO_DRV");
      }
    }
    else {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: %s: Failed to read data - %d %ld %ld\n",uVar4,
                       "H_SDIO_DRV","sdio_read_task",iVar3,uVar5,uVar5);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
      DAT_ram_4ff6dbb0 = DAT_ram_4ff6dbb0 + uVar5 & 0xfffff;
    }
  } while( true );
}


