/* Firmware entry: 0x4814ccac */

undefined4 FUN_ram_4814ccac(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  uint uVar3;
  uint extraout_a4;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x20);
  uVar3 = 5;
  *(undefined1 *)(param_1 + 0x21) = 5;
  uVar2 = 2;
  if (bVar1 == 2) {
    FUN_ram_4814268a(&LAB_ram_4814cb48,param_1);
    uVar3 = (uint)*(byte *)(param_1 + 0x21);
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar2 = extraout_a3;
    uVar4 = extraout_a4;
  }
  else {
    uVar4 = uVar3;
    if (bVar1 != 0) {
      if (10 < bVar1) {
        return 0xfffffffb;
      }
      if (5 < bVar1) {
        if ((param_2 != 0) && (bVar1 == 10)) {
          FUN_ram_4815507e();
          FUN_ram_48151b58(param_1);
          return 0;
        }
        FUN_ram_481550ac(param_1,"User request");
        return 0;
      }
      *(undefined1 *)(param_1 + 0x20) = 0xc;
      (**(code **)(*(int *)(param_1 + 0xc) + 4))(param_1,*(undefined4 *)(param_1 + 0x10));
      return 0;
    }
  }
  (**(code **)(param_1 + 0x14))
            (param_1,uVar3,*(undefined4 *)(param_1 + 0x18),uVar2,uVar4,*(code **)(param_1 + 0x14));
  return 0;
}


