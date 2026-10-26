/* Firmware entry: 0x481922de */

uint FUN_ram_481922de(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar3 = param_3;
    do {
      if (0x1000 < uVar3) {
        uVar3 = 0x1000;
      }
      uVar3 = FUN_ram_48171358(param_1,param_2 + uVar1,uVar3);
      if ((int)uVar3 < 1) {
        if (((uVar3 & 0xffffff7f) != 0xffff9700) && (uVar3 != 0)) {
          FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-uVar3);
          FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),4,0x8018);
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: write error :-0x%04zX\n",uVar2,
                           "esp-tls-mbedtls",-uVar3);
          return uVar3;
        }
        if (uVar1 != 0) {
          return uVar1;
        }
        return uVar3;
      }
      uVar1 = uVar1 + uVar3;
      uVar3 = param_3 - uVar1;
    } while (uVar1 < param_3);
  }
  return uVar1;
}


