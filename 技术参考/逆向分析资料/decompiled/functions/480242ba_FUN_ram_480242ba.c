/* Firmware entry: 0x480242ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_480242ba(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *local_50;
  undefined4 uStack_4c;
  undefined4 local_48 [12];
  char cStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = local_48;
  puVar2 = &DAT_ram_481f4bc0;
  do {
    puVar8 = puVar2;
    puVar7 = puVar1;
    uVar3 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar3;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar1 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined4 *)&UNK_ram_481f4bf0);
  uVar3 = puVar8[5];
  puVar7[4] = _UNK_ram_481f4bf0;
  puVar7[5] = uVar3;
  iVar4 = FUN_ram_4800fa86();
  if ((iVar4 != 0) && (iVar4 = FUN_ram_4800fb66(&local_50), iVar4 == 0)) {
    if (*local_50 == '\x01') {
      iVar4 = FUN_ram_4800fbea(&uStack_4c);
      if (iVar4 == 0) {
        (**(code **)PTR_PTR_ram_4ff47e40)(&DAT_ram_4ff5b4e4,uStack_4c,0x48);
        goto LAB_ram_4802432e;
      }
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: transport config is not for SDIO: ignoring\n",
                       uVar3,"sdio_wrapper");
    }
  }
  DAT_ram_4ff5b4e4 = 40000;
  DAT_ram_4ff5b4e8 = &stvec;
  DAT_ram_4ff5b4f0 = 0x12;
  DAT_ram_4ff5b4f8 = 0x13;
  DAT_ram_4ff5b500 = 0xe;
  DAT_ram_4ff5b508 = 0xf;
  DAT_ram_4ff5b510 = 0x10;
  DAT_ram_4ff5b518 = 0x11;
LAB_ram_4802432e:
  iVar4 = FUN_ram_48164d12();
  if (iVar4 == 0) {
    cStack_18 = (char)DAT_ram_4ff5b4e8;
    local_48[0] = DAT_ram_4ff5b4f0;
    local_48[1] = DAT_ram_4ff5b4f8;
    local_48[2] = DAT_ram_4ff5b500;
    local_48[3] = DAT_ram_4ff5b508;
    local_48[4] = DAT_ram_4ff5b510;
    local_48[5] = DAT_ram_4ff5b518;
    if ((DAT_ram_4ff5b4e8._1_1_ == '\0') && ((char)DAT_ram_4ff5b4e8 == '\x01')) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"sdio_wrapper",
                       "W (%lu) %s: workaround: setting D2-D3 in 1 bit mode for slot %d\n",uVar3,
                       "sdio_wrapper",0);
      local_48[4] = 0x29;
      local_48[5] = 0x2a;
    }
    iVar4 = FUN_ram_48164fa6(DAT_ram_4ff5b4e8._1_1_,local_48);
    if (iVar4 == 0) {
      DAT_ram_4ff5b4e0 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(200);
      if (DAT_ram_4ff5b4e0 != 0) {
        DAT_ram_4ff6dbe0 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x54))();
        if (DAT_ram_4ff6dbe0 != 0) {
          return &DAT_ram_4ff5b4e0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("port_esp_hosted_host_sdio.c",0x17d,"hosted_sdio_init","sdio_bus_lock");
      }
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: Failed to allocate memory for SDMMC card\n",
                       uVar3,"sdio_wrapper");
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: init SDMMC Host slot %d failed\n",uVar3,
                       "sdio_wrapper");
    }
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: Failed to initialize SDMMC host\n",uVar3,
                     "sdio_wrapper");
  }
  return (int *)0x0;
}


