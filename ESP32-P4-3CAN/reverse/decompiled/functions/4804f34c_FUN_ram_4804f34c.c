/* Firmware entry: 0x4804f34c */

undefined4 FUN_ram_4804f34c(uint *param_1,uint *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  byte bVar13;
  uint *puVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar11 = &DAT_ram_4ff47e48;
  do {
    cVar1 = *pcVar11;
    puVar3 = param_2;
    if (cVar1 == '\x01') {
LAB_ram_4804f3b8:
      bVar4 = (byte)puVar3[0x18];
      if (bVar4 != 0) {
        bVar13 = 0;
        puVar10 = puVar3;
        if (cVar1 == '\x01') goto LAB_ram_4804f474;
LAB_ram_4804f3d6:
        puVar14 = param_1 + 0x32;
        if (cVar1 == '\x02') {
          puVar14 = param_1 + 0x19;
        }
        uVar9 = (uint)(byte)puVar14[0x18];
        uVar12 = *puVar10 & 0x7ff;
        if (uVar9 == 0) goto LAB_ram_4804f486;
LAB_ram_4804f3ec:
        uVar8 = 0;
        puVar7 = puVar14;
        do {
          uVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          if (uVar12 <= uVar6) {
            if (uVar8 < uVar9) {
              if (uVar12 == puVar14[uVar8]) goto LAB_ram_4804f464;
              if (0x17 < uVar9) goto LAB_ram_4804f492;
              uVar5 = uVar9 - uVar8 & 0xff;
              iVar2 = -(uVar5 - 1 & 0xff);
              uVar6 = uVar9 + 1 & 0xff;
              FUN_ram_4ff4522c(puVar14 + iVar2 + uVar9,puVar14 + (uVar9 - 1) + iVar2,uVar5 << 2);
              goto LAB_ram_4804f452;
            }
            break;
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar9 != uVar8);
        if (0x17 < uVar9) {
LAB_ram_4804f492:
          if (param_3 != (char *)0x0) {
            *param_3 = cVar1;
          }
          return 0;
        }
        uVar6 = uVar9 + 1 & 0xff;
LAB_ram_4804f452:
        do {
          puVar14[uVar8] = uVar12;
          *(char *)(puVar14 + 0x18) = (char)uVar6;
          bVar4 = (byte)puVar3[0x18];
LAB_ram_4804f464:
          bVar13 = bVar13 + 1;
          puVar10 = puVar10 + 1;
          if (bVar4 <= bVar13) break;
          if (cVar1 != '\x01') goto LAB_ram_4804f3d6;
LAB_ram_4804f474:
          uVar9 = (uint)(byte)param_1[0x18];
          uVar12 = *puVar10 & 0x7ff;
          puVar14 = param_1;
          if (uVar9 != 0) goto LAB_ram_4804f3ec;
LAB_ram_4804f486:
          uVar8 = 0;
          uVar6 = 1;
        } while( true );
      }
    }
    else {
      if (cVar1 == '\x02') {
        puVar3 = param_2 + 0x19;
        goto LAB_ram_4804f3b8;
      }
      if (cVar1 == '\x04') {
        puVar3 = param_2 + 0x32;
        goto LAB_ram_4804f3b8;
      }
    }
    pcVar11 = pcVar11 + 1;
    if (pcVar11 == &DAT_ram_4ff47e4b) {
      return 1;
    }
  } while( true );
}


