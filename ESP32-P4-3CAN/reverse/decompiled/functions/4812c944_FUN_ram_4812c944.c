/* Firmware entry: 0x4812c944 */

undefined4 FUN_ram_4812c944(uint *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  ushort *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 != (uint *)0x0) && (8 < param_2)) && (uVar4 = *param_1, uVar4 != 0)) &&
     (((uVar4 & 3) == 0 && (uVar4 < param_2)))) {
    if (200 < uVar4 >> 2) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                       "E (%lu) %s: Cert bundle certificates exceed max allowed certificates\n",
                       uVar2,"esp-x509-crt-bundle");
      return 0;
    }
    puVar1 = param_1;
    do {
      puVar3 = puVar1 + 1;
      if (puVar3 == param_1 + (uVar4 >> 2)) {
        return 1;
      }
      puVar5 = (ushort *)((int)param_1 + *puVar1);
    } while ((*puVar3 == ((uint)*puVar5 + (uint)puVar5[1] + 4 & 0xffff) + *puVar1) &&
            (puVar1 = puVar3, *puVar3 < param_2));
  }
  return 0;
}


