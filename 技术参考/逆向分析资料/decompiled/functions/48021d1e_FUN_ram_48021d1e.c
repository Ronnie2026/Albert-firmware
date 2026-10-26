/* Firmware entry: 0x48021d1e */

void FUN_ram_48021d1e(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbStack_58;
  byte bStack_54;
  byte bStack_53;
  undefined2 local_52;
  byte *pbStack_50;
  ushort uStack_4c;
  ushort uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 *puStack_44;
  
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: sdio_data_to_rx_buf_task started\n",uVar3,
                   "H_SDIO_DRV");
  do {
    while( true ) {
      while ((**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dba8,0xffffffff),
            DAT_ram_4ff48618 < 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: invalid double buf read_index\n",uVar3,
                         "H_SDIO_DRV");
      }
      iVar7 = (&DAT_ram_4ff48608)[DAT_ram_4ff48618 * 2];
      if (DAT_ram_4ff4861c != 0) break;
LAB_ram_48021eee:
      DAT_ram_4ff48618 = -1;
    }
    uVar9 = DAT_ram_4ff4861c;
    if (iVar7 != 0) {
      do {
        if (uVar9 < 0xc) goto LAB_ram_48021f32;
        uVar1 = *(ushort *)(iVar7 + 2);
        uVar2 = (uint)uVar1;
        uVar8 = *(ushort *)(iVar7 + 4) + uVar2;
        if ((((0x5f3 < (uVar2 - 1 & 0xffff)) || (*(ushort *)(iVar7 + 4) != 0xc)) || (uVar9 < uVar8))
           || (0x600 < uVar8)) goto LAB_ram_48021f32;
        if (((*(byte *)(iVar7 + 1) & 2) != 0) && (uVar2 < 0x5dc)) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Host wakeup triggered, len: %u \n",uVar3,
                           "H_SDIO_DRV",uVar2);
        }
        pbVar4 = (byte *)FUN_ram_4801c46c(DAT_ram_4ff6dbd0,0x600,1);
        if (pbVar4 == (byte *)0x0) {
          FUN_ram_4ff2b96c(2,uVar8);
          goto LAB_ram_48021f3e;
        }
        FUN_ram_4ff45158(pbVar4,iVar7,uVar8);
        local_52 = 0;
        uStack_46 = 0;
        pbStack_50 = pbVar4 + 0xc;
        bStack_54 = *pbVar4 & 0xf;
        bStack_53 = *pbVar4 >> 4;
        puStack_44 = &LAB_ram_48021a40;
        uStack_48 = *(undefined2 *)(pbVar4 + 8);
        iVar6 = 0;
        uStack_4c = (ushort)pbVar4[1];
        if (bStack_54 != 3) {
          iVar6 = (bStack_54 != 4) + 1;
        }
        iVar5 = (&DAT_ram_4ff5b2e8)[iVar6];
        pbStack_58 = pbVar4;
        uStack_4a = uVar1;
        if ((iVar5 == 0) || (DAT_ram_4ff6dbb8 == 0)) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"H_SDIO_DRV",
                           "I (%lu) %s: uninitialised from_slave_queue or sem_from_slave_queue\n",
                           uVar3,"H_SDIO_DRV");
LAB_ram_48021fa4:
          FUN_ram_4801c514(DAT_ram_4ff6dbd0,pbVar4);
          FUN_ram_4ff2b96c(3,uVar8);
          goto LAB_ram_48021f3e;
        }
        iVar6 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x38))
                          (iVar5,&pbStack_58,0,pbVar4[1],&DAT_ram_4ff5b2e8 + iVar6,
                           *(code **)(PTR_PTR_ram_4ff47e40 + 0x38));
        if (iVar6 != 0) goto LAB_ram_48021fa4;
        iVar6 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x60))(DAT_ram_4ff6dbb8);
        if (iVar6 != 0) {
          FUN_ram_4ff2b990(7,0xffffffff,uVar2);
        }
        uVar9 = uVar9 - uVar8;
        iVar7 = iVar7 + uVar8;
      } while (uVar9 != 0);
      goto LAB_ram_48021eee;
    }
LAB_ram_48021f32:
    FUN_ram_4ff2b96c(1,uVar9);
LAB_ram_48021f3e:
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: Failed to push data to rx queue\n",uVar3,
                     "H_SDIO_DRV");
    DAT_ram_4ff48618 = -1;
  } while( true );
}


