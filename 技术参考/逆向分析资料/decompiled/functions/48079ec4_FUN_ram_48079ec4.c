/* Firmware entry: 0x48079ec4 */

undefined4 FUN_ram_48079ec4(uint param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  byte bVar11;
  uint __n;
  undefined **ppuVar12;
  char local_64 [64];
  char acStack_24 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
LAB_ram_4807a0bc:
    uVar4 = 0;
  }
  else {
    pvVar3 = memchr(param_2,0x26,param_1);
    if (pvVar3 == (void *)0x0) goto LAB_ram_4807a07a;
LAB_ram_48079ef0:
    uVar1 = (int)pvVar3 - (int)param_2;
    __n = uVar1;
    if (param_1 < uVar1) {
      __n = param_1;
    }
    if (__n != 0) {
      pvVar3 = memchr(param_2,0x3d,__n);
      uVar2 = uVar1;
      if (pvVar3 == (void *)0x0) goto LAB_ram_4807a094;
      while( true ) {
        if ((uint)((int)pvVar3 - (int)param_2) < __n) {
          __n = (int)pvVar3 - (int)param_2;
        }
        memset(local_64,0,0x41);
        uVar2 = uVar1;
        if (__n == 0) break;
        while( true ) {
          uVar1 = 0;
          pcVar7 = local_64;
          do {
            pcVar9 = (char *)((int)param_2 + uVar1);
            cVar10 = *pcVar9;
            if (cVar10 == '%') {
              uVar1 = uVar1 + 2;
              if (__n <= uVar1) goto LAB_ram_48079fde;
              cVar10 = pcVar9[1];
              cVar8 = cVar10 + -0x30;
              if (9 < (byte)(cVar10 - 0x30U)) {
                if ((byte)(cVar10 + 0x9fU) < 6) {
                  cVar8 = cVar10 + -0x57;
                }
                else {
                  if (5 < (byte)(cVar10 + 0xbfU)) goto LAB_ram_48079fde;
                  cVar8 = cVar10 + -0x37;
                }
              }
              cVar10 = *(char *)((int)param_2 + uVar1);
              bVar11 = cVar10 - 0x30;
              if (9 < bVar11) {
                if ((byte)(cVar10 + 0x9fU) < 6) {
                  bVar11 = cVar10 + 0xa9;
                }
                else {
                  if (5 < (byte)(cVar10 + 0xbfU)) goto LAB_ram_48079fde;
                  bVar11 = cVar10 - 0x37;
                }
              }
              cVar10 = bVar11 + cVar8 * '\x10';
            }
            if ((0x5d < (byte)(cVar10 - 0x21U)) || (acStack_24 == pcVar7)) goto LAB_ram_48079fde;
            if ((byte)(cVar10 + 0xbfU) < 0x1a) {
              cVar10 = cVar10 + ' ';
            }
            *pcVar7 = cVar10;
            uVar1 = uVar1 + 1;
            pcVar7 = pcVar7 + 1;
          } while (uVar1 < __n);
          ppuVar12 = &PTR_s_op_ram_481d75d0_8_ram_481f513c;
          do {
            puVar6 = *ppuVar12;
            ppuVar12 = ppuVar12 + 1;
            iVar5 = FUN_ram_4ff453ae(local_64,puVar6);
            if (iVar5 == 0) goto LAB_ram_48079fde;
          } while (ppuVar12 != &PTR_s__config_ram_481cac88_0xc_ram_481f5154);
          if (uVar2 == 0xffffffff) goto LAB_ram_4807a0bc;
          param_1 = param_1 - (uVar2 + 1);
          param_2 = (void *)((int)param_2 + uVar2 + 1);
          if (param_1 == 0) goto LAB_ram_4807a0bc;
          pvVar3 = memchr(param_2,0x26,param_1);
          if (pvVar3 != (void *)0x0) goto LAB_ram_48079ef0;
LAB_ram_4807a07a:
          uVar1 = 0xffffffff;
          uVar2 = 0xffffffff;
          pvVar3 = memchr(param_2,0x3d,param_1);
          __n = param_1;
          if (pvVar3 != (void *)0x0) break;
LAB_ram_4807a094:
          memset(local_64,0,0x41);
        }
      }
    }
LAB_ram_48079fde:
    uVar4 = 1;
  }
  return uVar4;
}


