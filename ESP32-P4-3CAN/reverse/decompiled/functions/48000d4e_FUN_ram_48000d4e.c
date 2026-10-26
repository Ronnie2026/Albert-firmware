/* Firmware entry: 0x48000d4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48000d4e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4ff326ce();
  iVar4 = 3;
  do {
    iVar6 = iVar4;
    if (param_1 == 1) {
      do {
        FUN_ram_4ff32502(1);
        iVar4 = FUN_ram_4ff332dc(10,0x400);
        if (iVar4 != 0) {
          FUN_ram_4ff32608(1);
          iVar2 = 1;
          goto LAB_ram_48000d8a;
        }
        iVar4 = iVar6 + -1;
        bVar1 = 0 < iVar6;
        iVar6 = iVar4;
      } while (bVar1);
      if (DAT_ram_4ff47dac < 2) {
        FUN_ram_4ff32608();
      }
      else {
        uVar5 = FUN_ram_4ff44d14();
        ets_printf("W (%lu) %s: 32 kHz clock not found, switching to internal 150 kHz oscillator\n",
                   uVar5,&DAT_ram_481b0600);
        FUN_ram_4ff32608(0);
      }
LAB_ram_48000e04:
      FUN_ram_4ff32502(0);
      iVar2 = 0;
      param_1 = 0;
      iVar6 = iVar4;
    }
    else {
      FUN_ram_4ff32608(0);
      iVar2 = 0;
      if (iVar3 == 1) goto LAB_ram_48000e04;
    }
LAB_ram_48000d8a:
    FUN_ram_4ff32588(0);
    _DAT_ram_501150ac = (iVar2 << 4 | 0x40U) << 0x18;
    iVar2 = FUN_ram_4ff332dc(0xffffffff,0x400);
    iVar4 = iVar6;
    if (iVar2 != 0) {
      FUN_ram_4ff2fdec();
      return;
    }
  } while( true );
}


