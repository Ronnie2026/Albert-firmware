/* Firmware entry: 0x48148070 */

int * FUN_ram_48148070(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar4 = DAT_ram_4ff6e1ac;
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
    if ((char)param_2[4] != '\0') {
      return (int *)0x0;
    }
    uVar2 = *param_2;
    if ((uVar2 & 0xc0ff) == 0x80fe) {
      return (int *)0x0;
    }
  }
  else {
    if (*DAT_ram_4ff6e1ac == 0) {
      if ((*(byte *)((int)DAT_ram_4ff6e1ac + 0xe7) & 5) != 5) {
        return (int *)0x0;
      }
      if ((char)param_2[4] != '\0') {
        if ((char)param_2[4] != (char)(*(char *)((int)DAT_ram_4ff6e1ac + 0xea) + '\x01')) {
          return (int *)0x0;
        }
        return DAT_ram_4ff6e1ac;
      }
      return DAT_ram_4ff6e1ac;
    }
    if ((char)param_2[4] != '\0') {
      while( true ) {
        while ((char)(*(char *)((int)piVar4 + 0xea) + '\x01') != (char)param_2[4]) {
          piVar4 = (int *)*piVar4;
          if (piVar4 == (int *)0x0) {
            return (int *)0x0;
          }
        }
        if (((*(byte *)((int)piVar4 + 0xe7) & 1) != 0) &&
           ((*(byte *)((int)piVar4 + 0xe7) >> 2 & 1) != 0)) break;
        piVar4 = (int *)*piVar4;
        if (piVar4 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      return piVar4;
    }
    uVar2 = *param_2;
    if ((uVar2 & 0xc0ff) == 0x80fe) {
      cVar5 = (char)param_1[4];
      if (cVar5 != '\0') goto LAB_ram_481481dc;
      goto LAB_ram_481481a6;
    }
  }
  if (((((uVar2 & 0x8fff) - 0x1ff & 0xfffffeff) == 0) || ((*param_1 & 0xc0ff) == 0x80fe)) ||
     ((*param_1 == 0 && (((param_1[1] == 0 && (param_1[2] == 0)) && (param_1[3] == 0x1000000)))))) {
    cVar5 = (char)param_1[4];
    if (cVar5 != '\0') {
      while( true ) {
        if (piVar4 == (int *)0x0) {
          return (int *)0x0;
        }
LAB_ram_481481dc:
        if ((((*(byte *)((int)piVar4 + 0xe7) & 1) != 0) &&
            ((*(byte *)((int)piVar4 + 0xe7) >> 2 & 1) != 0)) &&
           ((char)(*(char *)((int)piVar4 + 0xea) + '\x01') == cVar5)) break;
        piVar4 = (int *)*piVar4;
      }
      return piVar4;
    }
    do {
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
LAB_ram_481481a6:
      if ((*(byte *)((int)piVar4 + 0xe7) & 5) == 5) {
        puVar8 = (uint *)(piVar4 + 0x13);
        puVar6 = (uint *)(piVar4 + 0x25);
        do {
          uVar2 = *puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          if ((((uVar2 & 0x10) != 0) && (*param_1 == *puVar8)) &&
             ((param_1[1] == puVar8[1] && ((param_1[2] == puVar8[2] && (param_1[3] == puVar8[3])))))
             ) {
            return piVar4;
          }
          puVar8 = puVar8 + 6;
        } while ((uint *)(piVar4 + 0x25) != puVar8);
      }
      piVar4 = (int *)*piVar4;
    } while( true );
  }
  do {
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_ram_4814c110(param_2);
      if (piVar4 != (int *)0x0) {
        return piVar4;
      }
      piVar4 = DAT_ram_4ff6e1ac;
      if ((((*param_1 != 0) || (param_1[1] != 0)) || (param_1[2] != 0)) || (param_1[3] != 0)) {
        for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
          if ((*(byte *)((int)piVar4 + 0xe7) & 5) == 5) {
            puVar8 = (uint *)(piVar4 + 0x13);
            puVar6 = (uint *)(piVar4 + 0x25);
            do {
              uVar2 = *puVar6;
              puVar6 = (uint *)((int)puVar6 + 1);
              if (((((uVar2 & 0x10) != 0) && (*param_1 == *puVar8)) &&
                  ((param_1[1] == puVar8[1] &&
                   ((param_1[2] == puVar8[2] && (param_1[3] == puVar8[3])))))) &&
                 ((byte)param_1[4] == (byte)puVar8[4])) {
                return piVar4;
              }
              puVar8 = puVar8 + 6;
            } while (puVar8 != (uint *)(piVar4 + 0x25));
          }
        }
      }
      if ((DAT_ram_4ff6e1a8 != (int *)0x0) && ((*(byte *)((int)DAT_ram_4ff6e1a8 + 0xe7) & 5) == 5))
      {
        return DAT_ram_4ff6e1a8;
      }
      return (int *)0x0;
    }
    if ((*(byte *)((int)piVar4 + 0xe7) & 5) == 5) {
      pbVar7 = (byte *)(piVar4 + 0x25);
      puVar6 = (uint *)(piVar4 + 0x13);
      piVar3 = piVar4 + 0x26;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if ((((bVar1 & 0x10) != 0) && (*puVar6 == uVar2)) &&
           ((param_2[1] == puVar6[1] && ((char)puVar6[4] == '\0')))) {
          if (*piVar3 == 0) {
            return piVar4;
          }
          if ((param_2[2] == puVar6[2]) && (param_2[3] == puVar6[3])) {
            return piVar4;
          }
        }
        puVar6 = puVar6 + 6;
        piVar3 = piVar3 + 1;
      } while (pbVar7 != (byte *)((int)piVar4 + 0x97));
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}


